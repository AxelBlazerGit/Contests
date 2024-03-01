int boredChef(int n, int k, string &s) {
   // Write your code here.
   
      int arr[26]={0};
      for(auto ch:s){
         arr[ch-'a']++;
      }
      for(auto r:arr){
         if (r>=k) {
            return 1;
            break;
         }
      }
   return 0;
}

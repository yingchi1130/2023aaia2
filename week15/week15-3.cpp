//1208. Get Equal Substrings Within Budget
int equalSubstring(char* s, char* t, int maxCost) { //week15-1.c
    int N = strlen(s); //先知道字串的長度
    int ans = 0, j = 0;
    for(int i=0;i<N;i++){ //字串的迴圈
        maxCost -= abs( s[i] - t[i] ); //C語言直接減 i頭
        while(maxCost<0){
            maxCost += abs(s[j]-t[j]); //小心, 是j尾巴
            j += 1;
        }
        if(i-j+1>ans) ans = i-j+1; //更新答案
    }
    return ans; //課堂作業1,先隨便給個0當答案(答案當然不對)
}
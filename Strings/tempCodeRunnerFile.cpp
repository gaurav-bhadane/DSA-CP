void Upper(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        char currChar=ch[i];
        if (currChar>='a' && currChar<='z'){
            ch[i]=currChar-97+65;
        }
        i++;
    }
    cout<<ch;
}
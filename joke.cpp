#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("out.cpp","w",stdout);
    printf("#include<iostream>\n");//禁止套娃
    printf("using namespace std;\n");
    printf("int main(){\n");
    string s;
    while(getline(cin,s)&&s!=""){
        printf("    printf(\"%s\\n\");\n",s.c_str());
    }
    printf("    return 0;\n");
    printf("}");
    fclose(stdout);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
string interpret(string command) {
        string result;
        for(int i=0;i<command.length();){
            if(command[i]=='G'){
                result+='G';
                i++;
            }
            else if((command[i]=='(')&&(command[i+1]==')')){
                result+='o';
                i+= 2;
            }
else if (command[i] == '(' && command.substr(i, 4) == "(al)") {
                 result+="al";
                 i+=4;
            }
        }
        return result;
    }
int main(){
    string command="G()(al)";
    cout<<interpret(command);
}
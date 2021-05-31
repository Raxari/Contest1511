#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in;
    in.open("input.txt");
    string str;
    in >> str;
    int max, p;
    max=0;
    p=0;
    char max1='Y';
    int size=str.size();
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(str[i]==str[j]){
                p=1;
                if(j-i-1>max){
                    max=j-i-1;
                    max1=str[i];
                }
                else if (j-i-1==max && max1-str[i]>0){
                    max1=str[i];
                }
            }
        }
    }
    if (p==0){
        cout << "0";
    }
    else{
        cout << max1 << " " << max << endl;
    }
    in.close();
    return 0;
}

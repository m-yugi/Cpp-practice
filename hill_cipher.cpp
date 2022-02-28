#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;
int arr[26]={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
void keymatrix(string key,int key_matrix[3][3]){
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            key_matrix[i][j]=key[k]%'a';
            k++;
        }
    }
}
void textmatrix(int key,int text_matrix[][1],string text){
    for(int i=key;i<key+3;i++){
        text_matrix[i-key][0]=(text[i]-'a');
        //cout<<"this is the value of key-i"<<i-key<<"\n";
        //cout<<"\n";
    }
}
void encode(string text,int key_matrix[][3]){
    string s="";
    int key=0,text_matrix[3][1];
    for(int i=0;i<(text.length()/3);i++){
            textmatrix(key,text_matrix,text);
        for(int j=0;j<3;j++){
            int total=0;
            for(int k=0;k<3;k++){
            total+=((key_matrix[j][k])*(text_matrix[k][0]));
            //cout<<"this is the key_matrix : "<<(key_matrix[j][k])<<"\n";
            //cout<<"\n";
            //cout<<"this is text matrix : "<<text_matrix[k][0]<<"\n";
            //cout<<"\n";
            //cout<<((key_matrix[i][j])*(text[key]-'a'))%26<<'\n';
            }
            //cout<<total<<"\n";
            s+=arr[total%26];
            key++;
        }
    }
    cout<<"the encrypted text is :"<<s;
}
int main(){
    string key;
    string text;
    cout<<"pls enter the key\n";
    cin>>key;
    cout<<"pls enter the text\n";
    cin>>text;
    int keyy=0,key_matrix[3][3],text_matrix[3][1];
     keymatrix(key,key_matrix);
    // for(int l=0;l<3;l++){
    //     for(int j=0;j<3;j++){
    //         cout<<key_matrix[l][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    encode(text,key_matrix);
    // textmatrix(keyy,text_matrix,text);
    // keyy+=3;
    // textmatrix(keyy,text_matrix,text);
    // keyy+=3;
    // textmatrix(keyy,text_matrix,text);
    // keyy+=3;
    // textmatrix(keyy,text_matrix,text);
    // for(int k=0;k<text.length();k++){
    //     for(int i=0;i<3;i++){
    //         cout<<(char)arr[text_matrix[i][0]]<<"\n";
    //     }
    //     keyy++;
    //     cout<<"this is keyy :"<<keyy<<"\n";
    // }
    return 0;
}
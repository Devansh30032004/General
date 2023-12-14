#include<bits/stdc++.h>
using namespace std;

int main(){
    char in,fi;
    cin>>in>>fi;
    int n;
    cin>>n;
    int p=0,q=0;
    if(fi=='^'){
        if((n%4==0) && (in=='^')){
           p=1;
           q=1;
        }
        else if(n%4==1){
            if(in=='<'){
                p=1;
            }else if(in=='>'){
                q=1;
            }
        }else if(n%4==2){
            if(in=='v'){
                p=1;
                q=1;
            }
        }else if(n%4==3){
            if(in=='>'){
                p=1;
            }else if(in=='<'){
                q=1;
            }
        }
    }
    else if(fi=='>'){
        if((n%4==0) && (in=='>')){
           p=1;
           q=1;
        }
        else if(n%4==1){
            if(in=='^'){
                p=1;
            }else if(in=='v'){
                q=1;
            }
        }else if(n%4==2){
            if(in=='<'){
                p=1;
                q=1;
            }
        }else if(n%4==3){
            if(in=='v'){
                p=1;
            }else if(in=='^'){
                q=1;
            }
        }
    }else if(fi=='v'){
        if((n%4==0) && (in=='v')){
           p=1;
           q=1;
        }
        else if(n%4==1){
            if(in=='>'){
                p=1;
            }else if(in=='<'){
                q=1;
            }
        }else if(n%4==2){
            if(in=='^'){
                p=1;
                q=1;
            }
        }else if(n%4==3){
            if(in=='<'){
                p=1;
            }else if(in=='>'){
                q=1;
            }
        }
    }else{
        if((n%4==0) && (in=='<')){
           p=1;
           q=1;
        }
        else if(n%4==1){
            if(in=='v'){
                p=1;
            }else if(in=='^'){
                q=1;
            }
        }else if(n%4==2){
            if(in=='>'){
                p=1;
                q=1;
            }
        }else if(n%4==3){
            if(in=='^'){
                p=1;
            }else if(in=='v'){
                q=1;
            }
        }
    }
    if(p==1 && q==0){
        cout<<"cw";
    }else if(p==0 && q==1){
        cout<<"ccw";
    }else{
        cout<<"undefined";
    }
}
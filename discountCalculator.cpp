#include<iostream>
using namespace std;
int main() {
    int salePrice;
    int discountPrice;
    int netPayable;
    cout<<"Please! Enter Sale Price:";
    cin>>salePrice;
    if(salePrice>=15000) {
        discountPrice = salePrice/20;
        netPayable = salePrice - discountPrice;
        cout<<"Amount payable after 20% discount is "<<netPayable;
    }
    else if(salePrice>=10000){
        discountPrice = salePrice/15;
        netPayable = salePrice - discountPrice;
        cout<<"Amount payable after 15% discount is "<<netPayable;
    }
    else if(salePrice>=5000){
        discountPrice = salePrice/10;
        netPayable = salePrice - discountPrice;
        cout<<"Amount payable after 10% discount is "<<netPayable;
    }
    else if(salePrice<=5000){
        discountPrice = salePrice/5;
        netPayable = salePrice - discountPrice;
        cout<<"Amount payable after 5% discount is "<<netPayable;
    }
}
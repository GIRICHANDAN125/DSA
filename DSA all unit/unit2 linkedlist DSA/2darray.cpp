////2d array like matrix.

// #include <iostream>
// using namespace std;
// class data {
//     float a[2][3];
//     public:
//     void take(){
//         for(int i=0;i<2;i++){
//             for(int j=0;j<3;j++){
//             cin>>a[i][j];
//             }
//         }
//     }
//     void process(){
//         for(int i=0;i<2;i++){
//             for(int j=0;j<3;j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
//     }
// };
// int main(){
//     class data dd;
//     dd.take();
//     dd.process();
// }

/// 2d-array sum of  2 array
#include <iostream>
using namespace std;
class data {
    float a[2][3],b[2][3],c[2][3];
    public:
    void take(){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
            cin>>a[i][j];
            cin>>b[i][j];
            c[i][j]=0;
            }
        }
    }
    void process(){
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};


int main(){
    class data dd;
    dd.take();
    dd.process();
}





















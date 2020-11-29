#include <iostream>

using namespace std;

int main()
{
    float tn,fp,fn,f1,tpr,tnr,tp,acc;
   cout<<"please enter true positives: ";
   cin>>tp;
   cout<<"please enter true negative: ";
   cin>>tn;
   cout<<"please enter false positives: ";
   cin>>fp;
   cout<<"please enter false negative: ";
   cin>>fn;

 acc=(tp+tn) / (tp+tn+fp+fn);

f1=(2*tp) / (2*tp+fp+fn);
tpr=tp / (tp+fn);
tnr=tn / (tn+fp);

cout<<"ACC: "<<acc<<endl<<"F1: "<<f1<<endl<<"TPR: "<<tpr<<endl<<"TNR: "<<tnr;

    return 0;
}

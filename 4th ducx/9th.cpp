#include<iostream>
using namespace std;
char calculate(double A, double HW, double CT, double MT, double TF){
        double totalmarks = (A+HW+CT+MT+TF);
        double persentage = (totalmarks/180.0)*100.0;

        if(90.0<= persentage && persentage <=100.00){
            return 'A';
        }
        else if(86.0 <= persentage && persentage >= 89.0){
            return 'A-';
        }
        else if(82.0 <= persentage && persentage >= 85.0){
            return 'B+';
        }
        else if(78.0 <= persentage && persentage >= 81.0){
            return 'B';
        }
        else if(74.0 <= persentage && persentage >= 77.0){
            return 'B-';
        }
        else if(70.0 <= persentage && persentage >= 73.0){
            return 'C+';
        }
        else if(66.0 <= persentage && persentage >= 69.0){
            return 'C';
        }
        else if(62.0 <= persentage && persentage >= 65.0){
            return 'C-';
        }
        else if(58.0 <= persentage && persentage >= 61.0){
            return 'D';
        }
        else if(55.0 <= persentage && persentage >= 57.0){
            return 'D-';
        }
        else{
            return 'F';
        }
}
int main(){
    int n,i;
    double A, HW, CT, MT, TF;
    char grade;
    cout<<"Number of students : ";
    cin>>n;

    for(i=1; i<=n; i++){
        cout<<"Enter marks student "<<i<<": (Attendance, Assignment, CT, MT, TF ) : ";
    cin>>A>>HW>>CT>>MT>>TF;
    grade = calculate(A, HW, CT, MT, TF);
    cout<<"student "<<i<<":"<<grade<<endl;

    }
    return 0;  
}

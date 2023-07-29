/*
Actividad
Ana Gabriela Argüello Cedeño
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque> 
#include <string>
#include <string.h>
#include <sstream>

using namespace std;


//Punto 1;
int main() {  
    int a=0,b=0,c=0,sum=0;
    cin>> a >> b >>c;
    sum= a+b+c;
    cout<<sum;
    return 0;
}

//Punto 2;
int main(){
    deque<string>word={"one","two","three","four","five","six","seven","eight","nine"};
    int n,i=0;
    cin>>n;
    if (n<=9){
        cout<<word[n-1]<<endl;
    }else if(n>9){
        cout<<"Greater than 9"<<endl;
    }
    return 0;
}

//punto 3
int main(){
    deque<string>word={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b,i,j;
    cin>>a>>b;
    for(j=a;j<=b;j++){
        if(j<=9){
            cout<<word[j-1]<<endl;
        }else if(j>9){
            i= j%2;
            if(i==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}

//punto 4
int max_of_four(int a,int b, int c, int d){
    deque<int>num;
    num.push_back(a);
    num.push_back(b);
    num.push_back(c);
    num.push_back(d);
    int max=a;
    for(int i=1;i<4;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}

//punto 5

int main() {
    int num,i;
    int n;
    cin>>n;
    int arr[n] = {};
    for (i=0;i<n;i++){
        cin>>num;
        arr[i]=num;
    }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//punto 6
int main() {
    string a,b,com;
    char pri,seg;
    int tam1,tam2;
    cin>>a>>b;
    tam1= a.length();
    tam2= b.length();
    com = a+b;
    pri= a[0];
    seg= b[0];
    a[0]= seg;
    b[0]= pri;
    cout<<tam1<<" "<<tam2<<endl<<com<<endl<<a<<" "<<b;
    return 0;
}

//punto 7
class Student{
    private:
        int edad,stan;
        string nom, ape;
    public:
        void set_age(int age);
        void set_standard(int standard);
        void set_first_name(string first_name);
        void set_last_name(string last_name);
        int get_age();
        string get_first_name();
        string get_last_name();
        int get_standard();
        string to_string();
};

void Student::set_age(int age){
    edad = age;
    
}
void Student::set_standard(int standard){
    stan=standard;
}

void Student::set_first_name(string first_name){
    nom= first_name;
}

void Student::set_last_name(string last_name){
    ape= last_name;
}

int Student::get_age(){
    return edad;
}

int Student::get_standard(){
    return stan;
}

string Student::get_first_name(){
    return nom;
}

string Student::get_last_name(){
    return ape;
}

string Student::to_string(){
    stringstream pon,pone;
    string cad,num;
    pon<<edad;
    num = pon.str();
    cad += num;
    cad+=",";
    cad+=nom;
    cad+=",";
    cad+=ape;
    cad+=",";
    pone<<stan;
    num = pone.str();
    cad +=num;
    return cad;
}
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

//punto 8

class Student{
    private:
        int scores[5];
    public:
        void input();
        int calculateTotalScore();
};

void Student::input(){
    int i;
    for(i=0;i<5;i++){
        cin>>scores[i];
    }
}

int Student::calculateTotalScore(){
    int i,ans=0;
    for (i = 0; i < 5; i++) {
        ans+= scores[i];
    }
    return ans;
}


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    cout << count;
    
    return 0;
}
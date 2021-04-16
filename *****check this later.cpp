class Person {
    public:
    string name;
    int age;
    virtual void getdata(){
        cin>>this->name>>this->age;
    }
    virtual void putdata(){
        cout<<this->name<<" "<<this->age<<endl;
    }
};
class Professor: public Person{
    public:
    Professor(){
        this->cur_id = ++ id;
    }
    int publications;
    static int id;
    int cur_id;
    void getdata(){
        cin>>this->name>>this->age>>this->publications;
    }
    void putdata(){
        cout<<this->name<<" "<<this->age<<" "
        <<this->publications<<" "<<this->cur_id<<endl;
    }
};
int Professor:: id =0;
class Student: public Person{
    #define SUBJECT_MARKS 6
    public:
        Student() {
            this->cur_id = ++id;
        }
        int cur_id;
        static int id;
        int marks[SUBJECT_MARKS];
        void getdata(){
            cin>>this->name>>this->age;
            for(int i=1;i<=SUBJECT_MARKS;i++){
                cin>>marks[i];
            }
        }
        void putdata(){
            int totalMarks =0;
            for(int i=0;i<SUBJECT_MARKS;i++){
                totalMarks += marks[i];
            }
            cout<<this->name<<" "<<this->age<<" "<<totalMarks<<" "<<cur_id<<endl;
            
        }
    
};

int Student:: id=0;

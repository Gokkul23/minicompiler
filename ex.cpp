class ars{
    private:
        int a,b;
    public:
        int c,d;
    void run(){
        c = a + b;
    }
    int a;
};
int runs(int a,int b,int c){
    int d = a + b * c;
    return d;
}
int main(){
    int d = runs(5,6,7);
    cin >> e;
    cout << d << e;
    return 0;
}
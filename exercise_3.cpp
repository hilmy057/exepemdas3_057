class bidangDatar{
    private:
        int x;
    public:
    Lingkaran(double jariJari) : jariJari(jariJari) 

    double hitungLuas() {
        return M_PI * jariJari * jariJari;
    }

    double hitungKeliling() {
        return 2 * M_PI * jariJari;
    
    bidangDatar(){
        x=0;
        
    }
    virtual void input(){}
    virtual float Luas(int a){return 0;}
    void setX(int a){
        x=a;
    }
    int getX(){
        return x;
    }
};
class : Lingkaran:public bidangDatar{}:
class Bujursangkar:public bidangDatar{};
int main(){}
#include <tcframe/spec.hpp>
using namespace tcframe;
using namespace std;

const int MAXN = 1e5;
const int MAXB = 1e6;

class ProblemSpec : public BaseProblemSpec{
    protected:
        int N;
        vector<int> a;
        long long ans;

        void InputFormat(){
            LINE(N);
            LINE(a % SIZE(N));
        }

        void OutputFormat(){
            LINE(ans);
        }

        void GradingConfig(){
            TimeLimit(3);
            MemoryLimit(256);
        }

        void Constraints(){
            CONS(1 <= N && N <= MAXN);
            CONS(eachElementBeetween(a, 1, MAXB));
        }
    
    private:
        bool eachElementBeetween(const vector<int> & a, int lo, int hi){
            for (int i = 0; i < (int)a.size(); i++){
                if (a[i] < lo || a[i] > hi) return false;
            }
            return true;
        }

};

class TestSpec : public BaseTestSpec<ProblemSpec>{
    protected: 
        void TestCases(){
            CASE(N = 5, a = {2, 2, 1, 22, 14});
            CASE(N = 5, a = {2, 4, 6, 12, 20});
            CASE(N = 8, a = {16,20,4,28,30,10,2,3});
            for (int i = 0; i < 3; i++){
                CASE(N = 20, randomNumber1(a, N));
            }

            CASE(N = rnd.nextInt(100, 1000), randomNumber2(a, N));
            CASE(N = rnd.nextInt(100, 1000), randomNumber2(a, N));
            CASE(N = rnd.nextInt(700, 1000), randomNumber2(a, N));
            CASE(N = 1000, randomNumber3(a, N));
            CASE(N = 1000, randomNumber6(a, N));

            CASE(N = rnd.nextInt(1000, MAXN), randomNumber1(a, N));
            CASE(N = rnd.nextInt(10000, MAXN), randomNumber4(a, N));
            CASE(N = rnd.nextInt(50000, MAXN), randomNumber1(a, N));
            CASE(N = MAXN, randomNumber4(a, N));
            CASE(N = MAXN, randomNumber5(a, N));
        }
    
    private:
        void BeforeTestCases(){
            a.clear();
        }

        void randomNumber1(vector<int>& a, int N){
            a.clear();
            for (int i = 0; i < N; i++){
                int t = rnd.nextInt(1, 2);
                if (t == 1)
                    a.push_back(rnd.nextInt(1, MAXB));
                else 
                    a.push_back(rnd.nextInt(100000, MAXB));
            }
        }

        void randomNumber2(vector<int>& a, int N){
            a.clear();
            for (int i = 0; i < N; i++){
                int t = rnd.nextInt(1, 2);
                if (t == 1) 
                    a.push_back(rnd.nextInt(1, MAXN));
                else a.push_back(rnd.nextInt(10000, MAXN));
            }
        }

        void randomNumber3(vector<int> & a, int N){
             a.clear();
            for (int i = 0; i < N; i++){
                a.push_back(MAXN);
            }
        }

        void randomNumber4(vector<int> & a, int N){
             a.clear();
            for (int i = 0; i < N; i++){
                a.push_back(MAXB);
            }
        }

        void randomNumber5(vector<int> & a, int N){
             a.clear();
            for (int i = 0; i < N; i++){
                a.push_back(720720);
            }
        }

        void randomNumber6(vector<int> & a, int N){
             a.clear();
            for (int i = 0; i < N; i++){
                a.push_back(840);
            }
        }
};
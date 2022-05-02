namespace function {
    class limits { 
        public:
        
        int limit_a;
        int limit_b;

        void set_limits(int a, int b) {
            this -> limit_a = a;
            this -> limit_b = b;
        }
    }; 
    
    class linear : private limits {
        private:
        
        int _k;
        int _b;

        public:

        linear(int k, int b, int lim_a, int lim_b){
            this -> _k = k;
            this -> _b = b;
            this -> set_limits(lim_a, lim_b);
        }

        void Newton() {
            float integral;
            integral = (this -> _k * (pow(this -> limit_b, 2)/2) + this ->  _b * this -> limit_b) - (this -> _k * (pow(this -> limit_a, 2)/2) + this -> _b * this -> limit_a);
            std::cout << integral << '\n';
        }

    };
    
    class quadratic : private limits {
        private:

        int _a;
        int _b; 
        int _c;

        public:

        quadratic(int a, int b, int c, int lim_a, int lim_b) {
            this -> _a = a;
            this -> _b = b;
            this -> _c = c;
            this -> set_limits(lim_a, lim_b);
        }

        void Newton() {
            float integral;
            integral = (this -> _a * (pow(this -> limit_b, 3)/3) + this -> _b * (pow(this -> limit_b, 2)/2) + this -> _c * this -> limit_b) - (this -> _a * (pow(this -> limit_a, 3)/3) + this -> _b * (pow(this -> limit_a, 2)/2) + this -> _c * this -> limit_a);
            std::cout << integral << '\n';
        }
    };

}

# include <iostream>

class Gear {
    private:
        static int b;
        int a;

    private:
        Gear() {
            a = b;
            b++;
        }
        Gear(const Gear &other) {}
        Gear &operator=(const Gear &other) { return (*this); }

    public:
        static Gear &getInstance() {
            static Gear instance;

            return (instance);
        }

        void print() {
            std::cout << "a: " << this->a << ", Gear is a Singleton bitch!" << std::endl;
        }
};

int Gear::b = 0;

int main() {
    Gear &instance1 = Gear::getInstance();
    Gear &instance2 = Gear::getInstance();

    instance1.print();
    instance2.print();
    return (0);
}

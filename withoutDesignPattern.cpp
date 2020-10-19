#include <iostream>
#include <string>

std::string requestedPhone = "xiaomi";

class SmartphonePart {
public:
    virtual void produce() = 0;
};

class AppleBattery : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Apple battery\n";
    }
};
class AppleScreen : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Apple screen\n";
    }
};
class AppleShell : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Apple shell\n";
    }
};

class XiaomiBattery : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Xiaomi battery\n";
    }
};
class XiaomiScreen : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Xiaomi screen\n";
    }
};
class XiaomiShell : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Xiaomi shell\n";
    }
};

class HuaweiBattery : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Huawei battery\n";
    }
};
class HuaweiScreen : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Huawei screen\n";
    }
};
class HuaweiShell : public SmartphonePart {
public:
    void produce() {
        std::cout << "Producing Huawei shell\n";
    }
};

class Shop {
public:
    void orderPhone() {
        orderShell();
        orderBattery();
        orderScreen();
    }

    void orderShell() {
        SmartphonePart* a;
        if (requestedPhone == "apple") {
            a = new AppleShell;
        } else if (requestedPhone == "xiaomi") {
            a = new XiaomiShell;
        } else {
            a = new HuaweiShell;
        }
        a->produce();
    }

    void orderScreen() {
        SmartphonePart* a;
        if (requestedPhone == "apple") {
            a = new AppleScreen;
        } else if (requestedPhone == "xiaomi") {
            a = new XiaomiScreen;
        } else {
            a = new HuaweiScreen;
        }
        a->produce();
    }

    void orderBattery() {
        SmartphonePart* a;
        if (requestedPhone == "apple") {
            a = new AppleBattery;
        } else if (requestedPhone == "xiaomi") {
            a = new XiaomiBattery;
        } else {
            a = new HuaweiBattery;
        }
        a->produce();
    }
};

int main() {
    Shop* s = new Shop();
    s->orderPhone();
    return 0;
}

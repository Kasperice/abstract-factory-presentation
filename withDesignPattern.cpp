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

class Factory {
public:
    virtual SmartphonePart* produceShell() = 0;
    virtual SmartphonePart* produceScreen() = 0;
    virtual SmartphonePart* produceBattery() = 0;
};

class AppleFactory : public Factory {
public:
    SmartphonePart* produceShell() {
        return new AppleShell;
    }
    SmartphonePart* produceBattery() {
        return new AppleBattery;
    }
    SmartphonePart* produceScreen() {
        return new AppleScreen;
    }
};

class XiaomiFactory : public Factory {
public:
    SmartphonePart* produceShell() {
        return new XiaomiShell;
    }
    SmartphonePart* produceBattery() {
        return new XiaomiBattery;
    }
    SmartphonePart* produceScreen() {
        return new XiaomiScreen;
    }
};

class HuaweiFactory : public Factory {
public:
    SmartphonePart* produceShell() {
        return new HuaweiShell;
    }
    SmartphonePart* produceBattery() {
        return new HuaweiBattery;
    }
    SmartphonePart* produceScreen() {
        return new HuaweiScreen;
    }
};

class Client {
public:
    Client(Factory* f) {
        factory = f;
    }

    void orderPhone() {
        orderShell();
        orderBattery();
        orderScreen();
    }

    void orderShell() {
        SmartphonePart* a = factory->produceShell();
        a->produce();
    }

    void orderScreen() {
        SmartphonePart* a = factory->produceScreen();
        a->produce();
    }

    void orderBattery() {
        SmartphonePart* a = factory->produceBattery();
        a->produce();
    }

private:
    Factory* factory;
};

int main() {
    Factory* factory;
    if (requestedPhone == "apple") {
        factory = new AppleFactory;
    } else if (requestedPhone == "xiaomi") {
        factory = new XiaomiFactory;
    } else {
        factory = new XiaomiFactory;
    }

    Client* c = new Client(factory);
    c->orderPhone();
}

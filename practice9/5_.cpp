#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class CGoods {
public:
    CGoods(string &tid, string &tname, string &tcolor, string &tsize, float tprice, int tsum) {
        id = tid;
        name = tname;
        color = tcolor;
        size = tsize;
        price = tprice;
        sum = tsum;
    }

    CGoods(CGoods &cGoods) {
        id = cGoods.id;
        name = cGoods.name;
        color = cGoods.color;
        size = cGoods.size;
        price = cGoods.price;
        sum = cGoods.sum;
    }

    ~CGoods() {

    }

    float Countprice() {
        return (price * sum);
    }

    void show() {
        cout << name << "," << color << "," << size << "," << fixed << setprecision(2) << price << "," << sum << ","
             << fixed << setprecision(2) << Countprice() << endl;
    }

    friend class CCart;

private:
    string id, name, color, size;
    float price;
    int sum;
};

class CCart {
public:
    CCart() {
        sum = 0;
        pCGoods = new CGoods *[10];
        totalprice = 0;
        totalsum = 0;
    }

    ~CCart() {
        for (int i = 0; i < sum; i++) {
            delete pCGoods[i];
        }
        delete[] pCGoods;
    }

    void ADD(string &id, string &name, string &color, string &size, float price, int num) {
        pCGoods[sum] = new CGoods(id, name, color, size, price, num);
        sum++;
        totalsum++;
        totalprice += price;
    }

    void DELETE(string &id) {
        for (int i = 0; i < sum; i++) {
            if (pCGoods[i]->id == id) {
                for (int j = i; j < sum - 1; j++) {
                    totalprice -= pCGoods[i]->price;
                    delete pCGoods[i];
                    pCGoods[i] = new CGoods(*pCGoods[i + 1]);
                }
                break;
            }
        }
        sum--;
        totalsum--;
        delete pCGoods[sum];
    }

    void UP(string &id) {
        for (int i = 0; i < sum; i++) {
            if (pCGoods[i]->id == id) {
                totalprice += pCGoods[i]->price;
                pCGoods[i]->sum++;
                break;
            }
        }
        totalsum++;
    }

    void DOWN(string &id) {
        for (int i = 0; i < sum; i++) {
            if (pCGoods[i]->id == id) {
                if (pCGoods[i]->sum == 1) {
                    DELETE(pCGoods[i]->id);
                } else {
                    pCGoods[i]->sum--;
                }
                totalprice -= pCGoods[i]->price;
                break;
            }
        }
        totalsum--;
    }

    void SHOW() {
        cout << "商品清单:" << endl;
        cout << "商品,颜色,尺码,单价,数量,小计" << endl;
        for (int i = sum - 1; i >= 0; i--) {
            pCGoods[i]->show();
        }
        cout << "----------" << endl;
        cout << totalsum << "件商品,总商品金额" << fixed << setprecision(2) << totalprice << endl;
    }

private:
    CGoods **pCGoods;
    int sum, totalsum;
    float totalprice;
};

int main() {
    int t, n, sum;
    string operate, id, name, color, size;
    float price;
    cin >> t;
    while (t--) {
        CCart cCart;
        cin >> n;
        while (n--) {
            cin >> operate;
            if (operate == "ADD") {
                cin >> id >> name >> color >> size >> price >> sum;
                cCart.ADD(id, name, color, size, price, sum);
            } else if (operate == "DELETE") {
                cin >> id;
                cCart.DELETE(id);
            } else if (operate == "UP") {
                cin >> id;
                cCart.UP(id);
            } else if (operate == "DOWN") {
                cin >> id;
                cCart.DOWN(id);
            }
        }
        cCart.SHOW();
    }
    return 0;
}

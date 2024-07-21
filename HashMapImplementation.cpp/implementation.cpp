#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include <vector>
#include <list>
#include <cmath>
using namespace std;


template <typename K, typename V>
class HashMap {
private:
    class Node {
    public:
        K key;
        V value;

        Node(K key, V value) {
            this->key = key;
            this->value = value;
        }
    };

    int n; // number of nodes
    int N; // number of buckets
    std::vector<std::list<Node>> buckets;

    int hashFunction(K key) {
        return std::abs(std::hash<K>{}(key)) % N;
    }

    int searchInLL(K key, int bi) {
        auto &ll = buckets[bi];
        int i = 0;
        for (auto it = ll.begin(); it != ll.end(); ++it, ++i) {
            if (it->key == key) {
                return i;
            }
        }
        return -1;
    }

    void rehash() {
        std::vector<std::list<Node>> oldBuckets = buckets;
        N *= 2;
        buckets = std::vector<std::list<Node>>(N);
        for (auto &bucket : oldBuckets) {
            for (auto &node : bucket) {
                put(node.key, node.value);
            }
        }
    }

public:
    HashMap() : n(0), N(4), buckets(4) {}

    void put(K key, V value) {
        int bi = hashFunction(key);
        int di = searchInLL(key, bi);
        if (di == -1) {
            buckets[bi].emplace_back(key, value);
            n++;
        } else {
            auto it = buckets[bi].begin();
            std::advance(it, di);
            it->value = value;
        }
        double lambda = static_cast<double>(n) / N;
        if (lambda > 2.0) {
            rehash();
        }
    }

    bool containsKey(K key) {
        int bi = hashFunction(key);
        return searchInLL(key, bi) != -1;
    }

    V remove(K key) {
        int bi = hashFunction(key);
        int di = searchInLL(key, bi);
        if (di == -1) {
            return V();
        } else {
            auto it = buckets[bi].begin();
            std::advance(it, di);
            V value = it->value;
            buckets[bi].erase(it);
            n--;
            return value;
        }
    }

    V get(K key) {
        int bi = hashFunction(key);
        int di = searchInLL(key, bi);
        if (di == -1) {
            return V();
        } else {
            auto it = buckets[bi].begin();
            std::advance(it, di);
            return it->value;
        }
    }

    std::vector<K> keySet() {
        std::vector<K> keys;
        for (auto &bucket : buckets) {
            for (auto &node : bucket) {
                keys.push_back(node.key);
            }
        }
        return keys;
    }

    bool isEmpty() {
        return n == 0;
    }
};

int main() {
    HashMap<string, int> map;
    map.put("India", 190);
    map.put("China", 200);
    map.put("US", 50);

    std::vector<std::string> keys = map.keySet();
    for (const auto &key : keys) {
        std::cout << key << " " << map.get(key) << std::endl;
    }

    map.remove("India");
    std::cout << map.get("India") << std::endl;

    return 0;
}

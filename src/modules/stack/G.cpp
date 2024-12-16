#include <iostream>

using namespace std;

void formatXML(const string& xml) {
    int level = 0;

    for(int i = 0; i < xml.size();) {
        int j = xml.find('>', i);

        string tag = xml.substr(i, j - i +1);

        if(tag[1] == '/') level--;

        for(int k = 0; k < 2 * level; k++) cout << ' ';

        cout << tag << '\n';

        if(tag[1] != '/') level++;

        i = j + 1;
    }
}

int main() {
    string xml;

    getline(cin, xml);

    formatXML(xml);

    return 0;
}

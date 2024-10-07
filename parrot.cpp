#include <iostream>
#include <vector>

using std::string, std::vector, std::cout, std::endl;

class Parrot {
    private:
        vector<string> phrases;
        // string phrase;
    public:
        Parrot(const string phrase) {
            this->phrases.push_back(phrase);
            // this->phrase = phrase;
        }

        void say(const unsigned int howManyTimes) {
            int index = rand() % this->phrases.size();
            for(unsigned int i = 0; i < howManyTimes; i++) {
                cout << phrases[index] << "\n";
            }
        }

        /* void setPhrase(string new_phrase) {
            this->phrase = new_phrase;
        } */

        inline void addPhrase(const string phrase) {
            this->phrases.push_back(phrase);
        }

        inline void addPhrases(const vector<string> phrases) {
            for(string phrase : phrases) {
                this->phrases.push_back(phrase);
            }
        }
};

int main() {
    Parrot p("Wow, green");
    p.addPhrase("Bruh");
    p.addPhrase("Not");
    p.addPhrase("Bread");

    for(int i = 0; i < 8; i++) {
        p.say(1);
    }

    return 0;
}
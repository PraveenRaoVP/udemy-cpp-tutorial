#include <iostream>

class WrestlineScheduler {
    public:
        WrestlineScheduler(const std::vector<std::string>& teams) : teams(teams) {}
        void scheduleSeason();
    private:
        std::vector<std::string> teams;

};  
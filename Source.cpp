#include <iostream>
#include <string>
#include <vector>

class Client {
public:
    Client(std::string name, std::string contact) : name(name), contact(contact) {}
    std::string getName() const { return name; }
    std::string getContact() const { return contact; }
    void displayClientInfo() const {
        std::cout << "Client Name: " << name << "\nContact: " << contact << std::endl;
    }
private:
    std::string name;
    std::string contact;
};

class Campaign {
public:
    Campaign(std::string title, double budget) : title(title), budget(budget) {}
    std::string getTitle() const { return title; }
    double getBudget() const { return budget; }
    void displayCampaignInfo() const {
        std::cout << "Campaign Title: " << title << "\nBudget: $" << budget << std::endl;
    }
private:
    std::string title;
    double budget;
};

class Advertisement {
public:
    Advertisement(std::string content, std::string medium) : content(content), medium(medium) {}
    std::string getContent() const { return content; }
    std::string getMedium() const { return medium; }
    void displayAdInfo() const {
        std::cout << "Ad Content: " << content << "\nMedium: " << medium << std::endl;
    }
private:
    std::string content;
    std::string medium;
};

class AgencyManagementSystem {
public:
    void addClient(const Client& client) { clients.push_back(client); }
    void addCampaign(const Campaign& campaign) { campaigns.push_back(campaign); }
    void addAdvertisement(const Advertisement& advertisement) { advertisements.push_back(advertisement); }
    void displayAllClients() const {
        std::cout << "Clients:\n";
        for (const auto& client : clients) {
            client.displayClientInfo();
            std::cout << std::endl;
        }
    }
    void displayAllCampaigns() const {
        std::cout << "Campaigns:\n";
        for (const auto& campaign : campaigns) {
            campaign.displayCampaignInfo();
            std::cout << std::endl;
        }
    }
    void displayAllAdvertisements() const {
        std::cout << "Advertisements:\n";
        for (const auto& advertisement : advertisements) {
            advertisement.displayAdInfo();
            std::cout << std::endl;
        }
    }
private:
    std::vector<Client> clients;
    std::vector<Campaign> campaigns;
    std::vector<Advertisement> advertisements;
};

int main() {
    AgencyManagementSystem agency;

    Client client1("Client A", "contactA@example.com");
    Client client2("Client B", "contactB@example.com");

    Campaign campaign1("Campaign 1", 10000);
    Campaign campaign2("Campaign 2", 15000);

    Advertisement ad1("Ad Content 1", "TV");
    Advertisement ad2("Ad Content 2", "Social Media");

    agency.addClient(client1);
    agency.addClient(client2);

    agency.addCampaign(campaign1);
    agency.addCampaign(campaign2);

    agency.addAdvertisement(ad1);
    agency.addAdvertisement(ad2);

    std::cout << "Displaying All Clients:\n";
    agency.displayAllClients();

    std::cout << "\nDisplaying All Campaigns:\n";
    agency.displayAllCampaigns();

    std::cout << "\nDisplaying All Advertisements:\n";
    agency.displayAllAdvertisements();

    return 0;
}

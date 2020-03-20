class Player : public Client
{
	public:
		Player();
		Card getCards();
		void setCards();
		int getMoney();
		void setMoney();
		int getBet();
		void setBet();
		
	private:
		Card Cards[5];
		int money = 100;
		int bet;
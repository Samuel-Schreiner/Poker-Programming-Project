class Player : public Client
{
	public:
		Player();
		Card getCards()
		setCards();
		int getMoney();
		setMoney();
		int getBet();
		setBet();
		
	private:
		Card Cards[5];
		int money;
		int bet;
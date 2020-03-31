#ifndef CARD
#define CARD

class Card
{
	public:
		Card();
		int getcValue();
		void setcValue(int);
		int getcSuit();
		void setcSuit(int);
		/*returns a jpeg or something?*/ void getcImg();
		void setcImg();
		
	private:
		int cValue;
		int cSuit;
		/*jpeg?*/ int cImg;
		
};

#endif
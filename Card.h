class Card
{
	public:
		Card();
		int getcValue();
		void setcValue();
		int getcSuit();
		void setcSuit();
		/*returns a jpeg or something?*/ void getcImg();
		void setcImg();
		
	private:
		int cValue;
		int cSuit;
		/*jpeg?*/ int cImg;
		
};
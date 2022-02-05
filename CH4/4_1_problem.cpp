#include <iostream>

class Date 
{
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
    void SetDate(int year, int month, int date) 
    {
		year_ = year;
		month_ = month;
		day_ = date;
	}

	void AddDay(int inc) {
		int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		if (day_ + inc > days[month_]) 
        {
			if (month_ == 12) 
            {
				year_++;
				month_ = 1;
                day_ = day_ + inc - days[month_ + 1];
			}
			else {
				month_++;
                day_ = day_ + inc - days[month_ - 1];
			}
		}
		else {
			day_ += inc;
		}
	}

	void AddMonth(int inc) 
    {
		if (month_ + inc > 12) 
        {
			year_++;
			month_ = month_ + inc - 12;
		}
		else {
			month_ += inc;
		}
	}
	
	void AddYear(int inc) 
    {
		year_ += inc;
	}

	void ShowDate() 
    {
		std::cout << year_ << "년 " << month_ << "월 " << day_ << "일" << std::endl;
	}    
};

int main()
{
    Date date;
    std::cout << "1. 초기 날짜 설정" << std::endl;

    int F_day = 0;
    int F_month = 0;
    int F_year = 0;
    std::cout << "년 : " ;
    std::cin >> F_year;
    std::cout << "월 : " ;
    std::cin >> F_month;
    std::cout << "일 : " ;
    std::cin >> F_day;
	
    date.SetDate(F_year, F_month, F_day);
    std::cout << "초기 날짜" << std::endl;    
	date.ShowDate();


    std::cout << "2. 날짜 추가 하기" << std::endl;
    int A_day = 0;
    int A_month = 0;
    int A_year = 0;
    
    std::cout << "몇 년 추가 ? " ;
    std::cin >> A_year;
    std::cout << "몇 개월 추가 ? " ;
    std::cin >> A_month;
    std::cout << "몇 일 추가 ? " ;
    std::cin >> A_day;
	
    
    date.AddYear(A_year);
	date.AddMonth(A_month);
    date.AddDay(A_day);
    std::cout << "최종날짜는" << std::endl;
    date.ShowDate();

}
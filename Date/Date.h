#ifndef DATE_H
#define DATE_H


class Date
{
    private:
        int relativeDay;

    public:
        Date();
        Date(int day, int month, int year);

        Date addDays(int days) const;
        void addDays(int days);
        int differenceDays(const Date* date2) const;
        void getDMY(int* day, int* month, int* year) const;
        void setDMY(int day, int month, int year);
};

#endif // DATE_H

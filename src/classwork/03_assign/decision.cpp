//cpp
char get_letter_grade_using_if(int grade)
{
    if(grade>=90 && grade<=100)
        return 'A';
    else if(grade>=80)
        return 'B';
    else if(grade>=70)
        return 'C';
    else if(grade>=60)
        return 'D';
    else
        return 'F';
}
char get_letter_grade_using_switch(int grade)
{
    int x=grade/10;
    char result;
    switch(x)
    {
        case 10:
            result='A';
            break;
        case 9:
            result='A';
            break;
        case 8:
            result='B';
            break;
        case 7:
            result='C';
            break;
        case 6:
            result='D';
            break;
        default:
            result='F';
            break;
    }
    return result;
}
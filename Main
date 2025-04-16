int main()
{
    employee e1, e2, e3;

    string n, d, p;
    int i;
    for (int count = 1; count <= 3; count++)
    {
        cout << "\nEnter employee's name (no numbers): ";
        cin >> n;
        if (count == 1) e1.setname(n);
        else if (count == 2) e2.setname(n);
        else e3.setname(n);

        cout << "Enter " << n << "'s Department (no numbers): ";
        cin >> d;
        if (count == 1) e1.setdepar(d);
        else if (count == 2) e2.setdepar(d);
        else e3.setdepar(d);

        cout << "Enter " << n << "'s Position (no numbers): ";
        cin >> p;
        if (count == 1) e1.setposition(p);
        else if (count == 2) e2.setposition(p);
        else e3.setposition(p);

        cout << "Enter " << n << "'s ID Number (only numbers): ";
        cin >> i;
        if (count == 1) e1.setid(i);
        else if (count == 2) e2.setid(i);
        else e3.setid(i);
    }

    cout << "\n---------------------------------------------------------------\n";
    cout << left << setw(15) << "Name"
         << setw(10) << "ID"
         << setw(15) << "Department"
         << setw(15) << "Position" << endl;
    cout << "---------------------------------------------------------------\n";

    for (int count = 1; count <= 3; count++)
    {
        if (count == 1) { n = e1.getname(); i = e1.getid(); d = e1.getdepar(); p = e1.getposition(); }
        else if (count == 2) { n = e2.getname(); i = e2.getid(); d = e2.getdepar(); p = e2.getposition(); }
        else { n = e3.getname(); i = e3.getid(); d = e3.getdepar(); p = e3.getposition(); }

        cout << left << setw(15) << n
             << setw(10) << i
             << setw(15) << d
             << setw(15) << p << endl;
    }

    cout << "---------------------------------------------------------------\n";
    return 0;
}

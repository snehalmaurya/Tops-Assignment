switch (user_select_no)
    {
    case 1:
        c.addition();
        break;
    case 2:
        c.substraction();
        break;
    case 3:
        c.multiplication();
        break;
    case 4:
        c.Divison();
        break;
    case 5:
        c.modulo();
        break;

    default:
        cout << "select 1 to 5 number";
        break;
    }
void stringOne(string &strIn)

  {


int pos = strIn.find('a');
    while(pos!=strIn.npos)
    {
        if(pos==0)
        {
            if(strIn[pos+1]==' ')
            {
                strIn.rep(pos,1,"one");
                break;
            }
        }
        else if(pos==strIn.length()-1)
        {
            if(strIn[pos-1]==' ')
            {
                strIn.rep(pos,1,"one");
                break;
            }
        }
        else
        {
            if(strIn[pos-1]==' '&&strIn[pos+1]==' ')
            {
                strIn.rep(pos,1,"one");
                break;
            }
        }
        pos = strIn.find('a',pos+1);
    }
}

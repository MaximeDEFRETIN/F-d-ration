#ifndef UNNITES_H
#define UNNITES_H


class Unnites
{
    public:
        Unnites();
        virtual ~Unnites();

        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        string Getdescr() { return descr; }
        void Setdescr(string val) { descr = val; }
        string Getstatus() { return status; }
        void Setstatus(string val) { status = val; }
        string Getbonus[5][2]() { return bonus[5][2]; }
        void Setbonus[5][2](string val) { bonus[5][2] = val; }
        int Getniv() { return niv; }
        void Setniv(int val) { niv = val; }
        float GetPV[2]() { return PV[2]; }
        void SetPV[2](float val) { PV[2] = val; }
        float GetXP[2]() { return XP[2]; }
        void SetXP[2](float val) { XP[2] = val; }
        float Getpuiss[2]() { return puiss[2]; }
        void Setpuiss[2](float val) { puiss[2] = val; }

    protected:
        string nom;
        string descr;
        string status;
        string bonus[5][2];
        int niv;
        float PV[2];
        float XP[2];
        float puiss[2];

    private:
};

#endif // UNNITES_H

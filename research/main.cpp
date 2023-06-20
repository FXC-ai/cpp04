#include <iostream>

class Vehicule
{
    public:
        virtual void affiche() const;
        virtual ~Vehicule();

    protected:
        int m_prix;
};

class Voiture : public Vehicule
{
    public:
        virtual void affiche() const;
        virtual ~Voiture();

    private:
        int m_portes;
};

class Moto : public Vehicule
{
    public:
        virtual void affiche() const;
 
    private:
        double m_vitesse;
};

Vehicule::~Vehicule()
{
    std::cout << "Vehicule destructor called" << std::endl;
}

Voiture::~Voiture()
{
    std::cout << "Voiture destructor called" << std::endl;
}

void Vehicule::affiche() const
{
    std::cout << "Ceci est un vehicule." << std::endl;;
}

void Voiture::affiche() const
{
    std::cout << "Ceci est une voiture." << std::endl;;
}

void Moto::affiche() const
{
    std::cout << "Ceci est une moto." << std::endl;;
}

void presenter(Vehicule const& v)
{
	v.affiche();
}

void presenter_avec_un_pointeur(Vehicule const* v)
{
	v->affiche();
}


int main()
{
    Vehicule *v(0);
    v = new Voiture;

    v->affiche();

    delete v;

    return 0;
}

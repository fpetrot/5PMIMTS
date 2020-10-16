#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include <systemc>

using namespace sc_core;

SC_MODULE(Producteur)
{
	sc_port<sc_fifo_out_if<int> >    sortie;

	SC_CTOR(Producteur);

	void production();
};

#endif

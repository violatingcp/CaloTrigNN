#ifndef CALOTPNN_DATAFORMATS_TRHPART_HH
#define CALOTPNN_DATAFORMATS_TRHPART_HH

#include <TObject.h>


namespace baconhep
{
  class TRHPart : public TObject
  {
    public:
      TRHPart():
	pt(0), eta(0), phi(0), energy(0),eraw(0),em3(0),
	rho(0),ieta(0),iphi(0),depth(0),
	time(0),timefalling(0),
	x(0),y(0),z(0),
	genE(0),genEDepth(0),genETime(0),
	samples(0),soi(0),inPedAvg(0),gain(0)
    {}
    ~TRHPart(){}

    float pt,eta,phi,energy,eraw,em3;
    float rho,ieta,iphi,depth;
    float time,timefalling;
    float x,y,z;
    float genE,genEDepth,genETime;
    float samples,soi,inPedAvg,gain;
    std::vector<float> ts;
    std::vector<float> raw;
    std::vector<float> ped;
    std::vector<float> inNoiseADC;
    std::vector<float> inPedestal;
    std::vector<float> inNoisePhoto;
    std::vector<float> inputTDC;
    ClassDef(TRHPart,4)
  };
}
#endif

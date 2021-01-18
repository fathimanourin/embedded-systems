
int main()
{
  *((unsigned int*)0x400FE608)=0x20U;//Clock gating register to enable the clock on GPIO F port
  *((unsigned int*)0x40025400)=0x0EU;//direction for i/p or o/p set to 1 in FP1,FP2,FP3.
  *((unsigned int*)0x4002551C)=0x0EU;//digital function enabled on PF1, PF2, PF3
  int count;
  while(1){
    
     *((unsigned int*)0x400253FC)=0x02U;//RED LED ON
    count=0;
    while(count<=1000000)
    {
      count++;
    }
    *((unsigned int*)0x400253FC)=0x00U;//ALL LED's OFF
    
   *((unsigned int*)0x400253FC)=0x04U;//BLUE LED ON
   
   count=0;
    while(count<=1000000)
    {
     count++;
    }  
     *((unsigned int*)0x400253FC)=0x00U;//ALL LED's OFF
    
   *((unsigned int*)0x400253FC)=0x08U;//GREEN LED ON
   count=0;
    while(count<=1000000)
    {
          count++;
    }
    *((unsigned int*)0x400253FC)=0x00U;//ALL LED's OFF
    
  }
  return 0;
}

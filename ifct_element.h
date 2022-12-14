#ifndef ifct_element_h
#define ifct_element_h

#define N_PLACE                     40
#define N_HISTORY                   5
#define MAX_PLACENAME               100

void* ifctele_genElement(int index, int age, unsigned int detected_time, int history_place[N_HISTORY]);
char* ifctele_getPlaceName(int placeIndex);
int ifctele_getHistPlaceIndex(void *s);
int ifctele_getinfestedTime(int obj);
int ifctele_getAge(int obj,int obj2);
void ifctele_printElement(void* obj);
#endif /* ifct_element_h */

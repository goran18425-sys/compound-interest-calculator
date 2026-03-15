#include <stdio.h>
#include <math.h>

int main() {

    double konacan_iznos = 0.0;
    double konacan_iznos_dinari = 0.0;
    double kurs = 0.0;
    double glavnica = 0.0;
    double kamatna_stopa = 0.0;
    double faktor_rasta = 0.0;
    int godisnje_obracunavanje = 0;
    int broj_godina = 0;
    char valuta;
    char tekst[] = "";


    printf("Unesi kolicinu pocetnog novca koji ulazes(glavnica): ");
    scanf("%lf", &glavnica);

    printf("Unesi kolika je godisnja kamatna stopa u decimalnom obliku(npr. 0.05): ");
    scanf("%lf", &kamatna_stopa);

    printf("Unesi koliko puta godišnje se obračunava kamata: ");
    scanf("%d", &godisnje_obracunavanje);

    printf("Unesi broj godina koliko novac stoji: ");
    scanf("%d", &broj_godina);

    printf("Unesi valutu ($/e): ");
    scanf(" %c", &valuta);

    faktor_rasta = 1 + kamatna_stopa / godisnje_obracunavanje;
    konacan_iznos = glavnica * pow(faktor_rasta, godisnje_obracunavanje * broj_godina);

    if(valuta == '$'){
        kurs = 101.18;
        konacan_iznos_dinari = konacan_iznos * kurs;
        printf("U slucaju da je glavnica %.2lf%c, konačan iznos novca koji imaš na kraju (glavnica + kamata) je %.2lf%c, odnosno %.2lfdin(po kursu %.2lf).\n",glavnica, valuta,konacan_iznos, valuta, konacan_iznos_dinari, kurs);

    } else if(valuta == 'e' || valuta == 'E') {
        kurs = 117.40;
        konacan_iznos_dinari = konacan_iznos * kurs;
        printf("U slucaju da je glavnica %.2lf%c, konačan iznos novca koji imaš na kraju (glavnica + kamata) je %.2lf%c, odnosno %.2lfdin(po kursu %.2lf).\n",glavnica, valuta,konacan_iznos, valuta, konacan_iznos_dinari, kurs);

    } else {
        printf("Buduci da niste uneli tacnu valutu vas konacan iznos je %.2lf\n",konacan_iznos);

    }


    return 0;
}
{"associatedChampions":[56],"associatedMaps":[],"blocks":[{"hideIfSummonerSpell":"","items":[{"count":1,"id":"3340"},{"count":1,"id":"3363"},{"count":1,"id":"2003"},{"count":1,"id":"1055"}],"showIfSummonerSpell":"","type":"starting"},{"hideIfSummonerSpell":"","items":[{"count":1,"id":"3111"},{"count":1,"id":"3031"},{"count":1,"id":"3074"},{"count":1,"id":"3071"},{"count":1,"id":"3142"},{"count":1,"id":"3046"}],"showIfSummonerSpell":"","type":"recomendado"},{"hideIfSummonerSpell":"","items":[{"count":1,"id":"3110"},{"count":1,"id":"3022"},{"count":1,"id":"3143"}],"showIfSummonerSpell":"","type":"Opicional vs AD"},{"hideIfSummonerSpell":"","items":[{"count":1,"id":"3065"},{"count":1,"id":"3102"},{"count":1,"id":"3156"}],"showIfSummonerSpell":"","type":"Opicional vs AP"},{"hideIfSummonerSpell":"","items":[{"count":1,"id":"3036"},{"count":1,"id":"3153"},{"count":1,"id":"3087"}],"showIfSummonerSpell":"","type":"Outros"}],"map":"any","mode":"any","preferredItemSlots":[],"sortrank":4999,"startedFrom":"blank","title":"Noc top","type":"custom","uid":"LOL_47469DE9-DF29-AB89-0D89-2849A0CF0187"}                                                                                                                                                                                                                                                                                                                                                                                                                                                    erior != 2) {
                acumulador++;
                printf("Primo: %d + %d = %d\n", primoAnterior, primoPosterior, result);
            } 

            primoAnterior = primoAtual;
            primoAtual = primoPosterior; 
            primoPosterior = primoPosterior+1;

        } else {
            primoAtual += 2; 
        }
    }

    printf("%d", acumulador);

    return 0;
}

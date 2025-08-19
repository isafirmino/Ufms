class JogoAdivinhacao{
    Jogador[] jogadores;
    Jogador ganhador;
    boolean empate = false;

    public void jogar(int numJogos){
        while(numJogos > 0){

            int numeroAleatorio = (int)(Math.random() * 10);
            System.out.println("Estou pensando em um número entre 0 e 9...");
            System.out.println("O numero a ser adivinhado é o " + numeroAleatorio);

            boolean acertaram = false;

            while(!acertaram){
                for (Jogador jogador: jogadores) {
                    int palpite = jogador.adivinha();
                    System.out.println(jogador.getNome() + " escolheu " + palpite);

                    if (palpite == numeroAleatorio) {
                        acertaram = true;
                        jogador.addAcerto();
                        jogador.setAcertou(true);
                    }
                }

                if(acertaram){
                    System.out.println("Temos um ganhador!");
                    for(Jogador jogador: jogadores){
                        System.out.println("O jogador " + jogador.getNome()+ " acertou? " +jogador.getAcertou());
                        jogador.setAcertou(false);
                    }
                    System.out.print("Placar atual do jogo:\n");
                    for (Jogador jogador: jogadores){
                        System.out.println(jogador.getNome() + " = " + jogador.getAcertos() + " pontos.");
                    }
                System.out.println("Fim de jogo");
                numJogos = numJogos - 1;
                break;

                } 
                
                else {
                    System.out.println("Os jogadores tentarão novamente!"); 
                }
            }
        } 
        
    }

    public void getVencedor(){
        System.out.println("Analisando Vencedor...");
        ganhador = jogadores[0];
        for (int i = 1; i < 3; i = i + 1){
            if (jogadores[i].getAcertos() > ganhador.getAcertos()){
                ganhador = jogadores[i];
            }
            else if (jogadores[i].getAcertos() < ganhador.getAcertos()){
                continue;
            }
            else {
                empate = true;
            }
        }

        if (empate == true){
            System.out.println("Tivemos empate entre os jogadores:");
            for (Jogador jogador: jogadores){
                if (jogador.getAcertos() == ganhador.getAcertos()){
                    System.out.println(jogador.getNome() + " com " + jogador.getAcertos() + " acertos.");
                }
            }
        }
        else {
            System.out.println("O ganhador é o jogador: " + ganhador.getNome() + " com " + ganhador.getAcertos() + " pontos.");
        }
    }
}



# Controle de Acesso Eletrônico com Arduino

Este projeto implementa um sistema de controle de acesso baseado em um teclado matricial e um servomotor. O sistema permite o desbloqueio de uma tranca simulada por meio de um servomotor quando a senha correta é inserida. O sucesso da autenticação é indicado pelo acendimento de um LED verde, enquanto um LED vermelho sinaliza o bloqueio ou a tentativa de acesso incorreto.

## Componentes Necessários

- Arduino (ou compatível)
- Protoboard (placa de teste)
- Teclado Matricial 4x4
- Servomotor
- LEDs (vermelho e verde)
- 2 Resistores de 100 Ω


## Visão Geral

O projeto utiliza um teclado matricial para inserir uma senha. O servomotor atua como um mecanismo de tranca. Se a senha correta for inserida, o servomotor gira para a posição de desbloqueio e o LED verde é acionado. Se a senha estiver incorreta ou o sistema estiver bloqueado, o LED vermelho é acionado e o servomotor permanece na posição bloqueada.

## Configuração do Projeto

1. **Instale as Bibliotecas Necessárias:**
   - **Keypad**: Para o controle do teclado matricial.
   - **Servo**: Para o controle do servomotor.

   No Arduino IDE, vá para **Sketch** > **Include Library** > **Manage Libraries**, e procure e instale as bibliotecas mencionadas.

2. **Conecte os Componentes ao Arduino:**

   - **Teclado Matricial:**
     - Linhas (ROW): Pinos 9, 8, 7, 6
     - Colunas (COL): Pinos 5, 4, 3, 2

   - **Servomotor:**
     - Controle: Pino 13

   - **LEDs:**
     - LED Vermelho: Pino 12
     - LED Verde: Pino 11

3. **Carregue o Código:**
   - O código-fonte está disponível no arquivo [main.cpp](main.cpp).
   - Compile e carregue o código no seu Arduino usando o Arduino IDE.

## Uso

1. **Inserir Senha:**
   - Utilize o teclado matricial para inserir a senha e pressione `#` para confirmar.
   - A senha padrão é "2024".

2. **Status do Sistema:**
   - Se a senha estiver correta, o servomotor será desbloqueado e o LED verde acenderá.
   - Caso contrário, o LED vermelho ficará aceso e o servomotor permanecerá bloqueado.

3. **Reiniciar o Sistema:**
   - Pressione `*` ou `#` para reiniciar o processo de inserção da senha.

## Ideias de Melhorias Futuras

1. **Cadastramento de Usuários:**
   - Implementar um sistema de cadastramento de usuários para permitir múltiplos perfis e senhas. Cada usuário poderia ter uma senha exclusiva e o sistema poderia armazenar e gerenciar essas senhas.

2. **Conexão com a Internet e Salvamento em Banco de Dados:**
   - Adicionar conectividade com a internet para permitir o salvamento das informações em um banco de dados remoto. Isso possibilitaria a administração remota dos usuários e senhas, além de possibilitar registros de acesso e auditorias.

3. **Interface Gráfica para Administração:**
   - Desenvolver uma interface gráfica de usuário (GUI) que permita a administração do sistema de controle de acesso, visualização de logs e gerenciamento de usuários de forma mais intuitiva.

4. **Notificações e Alertas:**
   - Implementar um sistema de notificações que envie alertas por e-mail ou SMS em caso de tentativas de acesso não autorizadas ou eventos específicos, para aumentar a segurança e a rastreabilidade.

5. **Modo de Emergência:**
   - Adicionar um modo de emergência que permita a abertura manual do sistema em situações críticas, garantindo que o acesso possa ser feito mesmo em caso de falhas no sistema automatizado.

## Contribuição

Para contribuir com o projeto, siga estas etapas:

1. Fork o repositório.
2. Crie uma branch para sua feature (`git checkout -b feature/nome-da-feature`).
3. Faça commit das suas alterações (`git commit -am 'Descrição das alterações'`).
4. Envie a branch para o repositório remoto (`git push origin feature/nome-da-feature`).
5. Crie uma Pull Request para revisão.

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](https://opensource.org/license/mit) para mais detalhes.

## Autores

- [Vinícius Augusto](https://github.com/Dev-Vinicius1) 
- [Dennys Bergamaschi](https://github.com/DevDennys) 
- [Gabriel Braian](https://github.com/gabrieljpeg)
- [Felipe Lima](https://github.com/FelipeAkino)

## Agradecimentos

- Agradeço especialmente ao **Professor Alexandre Bartoli Monteiro** pela orientação e organização desse projeto.
- Um agradecimento especial aos monitores **Juliana** e **Lucas** pelo suporte e assistência durante o desenvolvimento do projeto.

## Referências

- [Documentação da Biblioteca Keypad](https://www.arduinolibraries.info/libraries/keypad)
- [Documentação da Biblioteca Servo](https://www.arduino.cc/en/Reference/Servo)

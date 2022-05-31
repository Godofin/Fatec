# Segunda Avalição Banco de Dados

A. Apresentada a tabela cliente:
<img width="670" alt="Cliente" src="https://user-images.githubusercontent.com/65193596/170974423-57a72b03-1293-4335-90a9-8c79f214e0bf.png">

B. Apresentada a tabela pedido:
<img width="664" alt="Pedido" src="https://user-images.githubusercontent.com/65193596/170974508-e2b3bc7c-8c3c-4cef-92d9-b0e37784a568.png">

1. Escreva o código em SQL que cria a Tabela Cliente conforme imagem acima. Identifique possíveis restrições de chave primária e chave estrangeira (1 Ponto)
2. Escreva o código em SQL que cria a Tabela Pedido conforme imagem acima. Identifique possíveis restrições de chave primária e chave estrangeira (1 Ponto).
3. Com base na tabela Cliente, escreva comandos DML da linguagem SQL que retornem as seguintes informações:
   1. Retorne todos Clientes do estado de São Paulo. (1 Ponto)
   2. Retorne a Razão Social e Estado de clientes do Brasil (1 Ponto)
   3. Retorne todos os Clientes do Brasil com Cargo “Manager”. (1 Ponto)
   4. Retorne a quantidade de clientes em cada cidade. (1 Ponto)
   5. Altere o contato da empresa Customer KIDPX para Durant, Paul (1 Ponto)
4. Com base na tabela Pedido, escreva o código de uma consulta na linguagem SQL que retorne os pedidos realizados entre 01/01/2020 e 31/12/2020. (1 Pontos)
5. Consultar as tabelas Cliente e Pedido retornando os registros relativos aos pedidos e clientes simultaneamente. (2 Pontos


## Answers


1. Resposta 1: Criação da tabela
create table cliente (
id_cliente smallint primary key,
razao_social varchar(300),
contato varchar(300), 
cargo varchar(300),
documento varchar(300), 
enderco varchar(300),
cidade varchar(300),
regiao char(2), 
cep int, 
pais varchar(300),
telefone long
);
Popular tabela:

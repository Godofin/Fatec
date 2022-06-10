/*1 Retorne todos Clientes do estado de São Paulo*/

select * from cliente where regiao = 'SP';

/*2*/
select razao_social, regiao from cliente where pais = 'brazil';

/*3*/
select * from cliente where pais = 'Brazil' and cargo like '%manager%';

/*4*/
select count(cidade) as conta_cidade from cliente group by cidade;

/*5*/
select * from cliente where razao_social like'%KIDPX' 
update cliente set contato = 'Durant, Paul' where id_cliente = 21;

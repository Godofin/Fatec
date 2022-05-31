create database provabd2;

use provabd2;

create table cliente (
id_cliente smallint primary key not null,
razao_social varchar(300) not null,
contato varchar(300) not null, 
cargo varchar(300) not null,
documento varchar(300) not null, 
enderco varchar(300) not null,
cidade varchar(300) not null,
regiao char(2) not null, 
cep int not null, 
pais varchar(300) not null,
telefone long not null
);

create table pedido (
id_pedido smallint primary key not null,
id_cliente smallint not null,
id_empregado smallint not null,
data_pedido date not null,
data_requisicao date not null, 
data_envio date not null, 
id_remetente smallint not null,
frete double not null, 
shipname varchar(300) not null,
shipadress varchar(300) not null,
constraint fk_idCliente foreign key(id_cliente) references cliente(id_cliente)

);

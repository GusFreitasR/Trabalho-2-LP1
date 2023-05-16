#include <iostream>

using namespace std;
class Aluno
{

    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string serie;

public:
    Aluno()
    {
        nomeCompleto = "";
        cpf = "";
        idade = "";
        matricula = 0;
        serie = "";
    };
    Aluno(string nomeCompleto, string cpf, string idade, long int matricula, string serie)
    {
        this->nomeCompleto = nomeCompleto;
        this->cpf = cpf;
        this->idade = idade;
        this->matricula = matricula;
        this->serie = serie;
    };

    string getNomeCompleto()
    {
        return nomeCompleto;
    };

    void setNomeCompleto(string nomeCompleto)
    {
        this->nomeCompleto = nomeCompleto;
    };

    string getCpf()
    {
        return cpf;
    };

    void setCpf(string cpf)
    {
        this->cpf = cpf;
    };

    string getIdade()
    {
        return idade;
    };

    void setIdade(string idade)
    {
        this->idade = idade;
    };

    string getSerie()
    {
        return serie;
    };

    void setSerie(string serie)
    {
        this->serie = serie;
    };

    long int getMatricula()
    {
        return matricula;
    };

    void setMatricula(long int matricula)
    {
        this->matricula = matricula;
    };
};

class Funcionario
{

    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string cargo;
    float salario;

public:
    Funcionario()
    {
        nomeCompleto = "";
        cpf = "";
        idade = "";
        matricula = 0;
        cargo = "";
        salario = 0;
    };
    Funcionario(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario)
    {
        this->nomeCompleto = nomeCompleto;
        this->cpf = cpf;
        this->idade = idade;
        this->matricula = matricula;
        this->cargo = cargo;
        this->salario = salario;
    };

    string getNomeCompleto()
    {
        return nomeCompleto;
    };

    void setNomeCompleto(string nomeCompleto)
    {
        this->nomeCompleto = nomeCompleto;
    };

    string getCpf()
    {
        return cpf;
    };

    void setCpf(string cpf)
    {
        this->cpf = cpf;
    };

    string getCargo()
    {
        return cargo;
    };

    void setCargo(string cargo)
    {
        this->cargo = cargo;
    };

    string getIdade()
    {
        return idade;
    };

    void setIdade(string idade)
    {
        this->idade = idade;
    };

    long int getMatricula()
    {
        return matricula;
    };
    void setMatricula(long int matricula)
    {
        this->matricula = matricula;
    };

    float getSalario()
    {
        return salario;
    };

    void setSalario(float salario)
    {
        this->salario = salario;
    };
};

class Escola
{

    string nomeEscola;
    string cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    Aluno *alunos = new Aluno[10];
    int contFunc = 0;
    int contAluno = 0;

public:
    Escola()
    {
        nomeEscola = "";
        cnpj = "";
    };
    Escola(string nomeEscola, string cnpj)
    {
        this->nomeEscola = nomeEscola;
        this->cnpj = cnpj;
    };
    string getNomeEscola()
    {
        return this->nomeEscola;
    };

    void setNomeEscola(string nomeEscola)
    {
        this->nomeEscola = nomeEscola;
    };

    string getCnpj()
    {
        return this->cnpj;
    };

    void setCnpj(string cnpj)
    {
        this->cnpj = cnpj;
    };

    void adicionarFunc(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario)
    {
        if (contFunc < 5)
        {
            funcionarios[contFunc].setNomeCompleto(nomeCompleto);
            funcionarios[contFunc].setCpf(cpf);
            funcionarios[contFunc].setIdade(idade);
            funcionarios[contFunc].setCargo(cargo);
            funcionarios[contFunc].setMatricula(matricula);
            funcionarios[contFunc].setSalario(salario);
            contFunc++;
        }
        else
        {
            cout << "A escola atingiu o máximo de funcionários!" << endl;
        }
    };
    void adicionarAluno(string nomeCompleto, string cpf, string idade, long int matricula, string serie)
    {
        if (contAluno < 10)
        {
            alunos[contAluno].setNomeCompleto(nomeCompleto);
            alunos[contAluno].setCpf(cpf);
            alunos[contAluno].setIdade(idade);
            alunos[contAluno].setSerie(serie);
            alunos[contAluno].setMatricula(matricula);
            contAluno++;
        }
        else
        {
            cout << "A escola atingiu o máximo de Alunos!" << endl;
        }
    };

    void listarFunc()
    {
        cout << "-------------FUNCIONARIOS------------" << endl;
        for (int i = 0; i < contFunc; i++)
        {

            cout << "Nome: " << funcionarios[i].getNomeCompleto() << endl;
            cout << "Matricula: " << funcionarios[i].getMatricula() << endl;
            cout << "CPF: " << funcionarios[i].getCpf() << endl;
            cout << "Cargo: " << funcionarios[i].getCargo() << endl;
            cout << "Idade: " << funcionarios[i].getIdade() << endl;
            cout << "Salario: " << funcionarios[i].getSalario() << endl;
            cout << "-------------------------------------" << endl;
        }
    };
    void listarAlunos()
    {
        cout << "----------------ALUNOS---------------" << endl;
        for (int i = 0; i < contAluno; i++)
        {

            cout << "Nome: " << alunos[i].getNomeCompleto() << endl;
            cout << "Matricula: " << alunos[i].getMatricula() << endl;
            cout << "CPF: " << alunos[i].getCpf() << endl;
            cout << "Serie: " << alunos[i].getSerie() << endl;
            cout << "Idade: " << alunos[i].getIdade() << endl;
            cout << "-------------------------------------" << endl;
        }
    };
    float calcularSalarios()
    {
        float soma = 0;
        for (int i = 0; i < contFunc; i++)
        {
            soma += funcionarios[i].getSalario();
        }
        return soma;
    };
};

int main()
{

    Escola *over = new Escola("Overdose", "402.639/17");
    over->adicionarFunc("Gustavo de Freitas","123.456.789-10", "21 anos", 12345, "Professor(a)", 3230);
    over->adicionarFunc("Guilherme Rodrigues","321.654.987-01", "22 anos", 54321, "Professor(a)", 3230);
    over->adicionarFunc("Giovanna Abrante","456.789.123-10", "20 anos", 101010, "Diretor(a)", 12000);
    over->adicionarAluno("Gustavo Rodrigues", "112.071.123-84", "15 anos", 202301, "1° serie");
    over->adicionarAluno("Giovanna Silva", "071.112.123-24", "15 anos", 202302, "1° serie");
    over->adicionarAluno("Anderson de Freitas", "123.112.073-54", "15 anos", 202303, "1° serie");

    float sal = over->calcularSalarios();
    cout << "***********************************************" << endl;
    cout << "O custo de salário de todos os funcionários: " << sal << endl;
    cout << "***********************************************" << endl;
    over->listarFunc();
    over->listarAlunos();

    return 0;
};
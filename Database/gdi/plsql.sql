CREATE OR REPLACE TRIGGER FonePessoaFK
  BEFORE INSERT ON FONE_PESSOA
  FOR EACH ROW
DECLARE
  value PESSOA.CPF%TYPE;
BEGIN
  SELECT CPF INTO value 
  FROM PESSOA
  WHERE CPF NOT IN (
    SELECT CPF 
    FROM FONE_PESSOA
  ) AND ROWNUM = 1;
  :NEW.CPF := value;
END;
/

CREATE OR REPLACE TRIGGER EmailPessoaFK 
  BEFORE INSERT ON EMAIL_PESSOA
  FOR EACH ROW
DECLARE
  value PESSOA.CPF%TYPE;
BEGIN
  SELECT CPF INTO value 
  FROM PESSOA
  WHERE CPF NOT IN (
    SELECT CPF 
    FROM EMAIL_PESSOA
  ) AND ROWNUM = 1;
  :NEW.CPF := value;
END;
/

CREATE OR REPLACE TRIGGER FoneClinicaFK
  BEFORE INSERT ON FONE_CLINICA
  FOR EACH ROW
DECLARE
  value CLINICA.CPF%TYPE;
BEGIN
  SELECT CPF INTO value 
  FROM CLINICA
  WHERE CPF NOT IN (
    SELECT CPF 
    FROM FONE_CLINICA
  ) AND ROWNUM = 1;
  :NEW.CPF := value;
END;
/

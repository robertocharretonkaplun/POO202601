#pragma once
#include "Prerequisites.h"

/**
 * @class Rectangulo
 * @brief Representa un rect�ngulo definido por su ancho y alto.
 *
 * Esta clase proporciona m�todos para calcular el �rea, el per�metro
 * y acceder a las dimensiones del rect�ngulo.
 */
class 
Rectangulo {
public:
  /**
   * @brief Constructor que inicializa un rect�ngulo con las dimensiones dadas.
   * @param ancho Valor del ancho del rect�ngulo.
   * @param alto Valor del alto del rect�ngulo.
   */
  Rectangulo(double ancho, double alto) : m_ancho(ancho), m_alto(alto) {};

  /**
   * @brief Destructor por defecto de la clase.
   */
  ~Rectangulo() = default;

  /**
   * @brief Calcula el �rea del rect�ngulo.
   * @return �rea del rect�ngulo como un valor double.
   */
  double 
  area() const {
    return m_ancho * m_alto;
  }

  /**
   * @brief Calcula el per�metro del rect�ngulo.
   * @return Per�metro del rect�ngulo como un valor double.
   */
  double 
  perimetro() const {
    return 2 * (m_ancho + m_alto);
  }

  /**
   * @brief Obtiene el ancho del rect�ngulo.
   * @return El ancho como un valor double.
   */
  double 
  getAncho() const {
    return m_ancho;
  }

  /**
   * @brief Obtiene el alto del rect�ngulo.
   * @return El alto como un valor double.
   */
  double 
  getAlto() const {
    return m_alto;
  }

private:
  double m_ancho; /**< Ancho del rect�ngulo */
  double m_alto;  /**< Alto del rect�ngulo */
};
